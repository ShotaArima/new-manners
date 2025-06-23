import logo from './logo.svg';
import './App.css';
import React, {useState, useEffect} from 'react';

function App() {
  const [data, setData] = useState({weather: "", schedule: ""});
  const [advice, setAdvice] = useState('');
  const [canCreate, setCanCreate] = useState(false);

  useEffect(() => {
    async function checkAIAvailability() {
      if (window.ai &&
        typeof window.ai.canCreateTextSession === 'function') {
      const result = await window.ai.canCreateTextSession();
      setCanCreate(result !== "no");
        }
    }
    checkAIAvailability()
  }, []);

  const handleChange = (e) => {
    const {name, value} = e.target;
    setData(prevData => ({
      ...prevData,
      [name]: value
    }));
  };

  const generateAdvice = async () => {
    const apiKey = process.env.REACT_APP_OPENAI_API_KEY;

    if (!apiKey) {
      console.error("APIキーが設定されていません。");
      setAdvice("APIキーが未設定です。管理者に連絡してください。");
      return;
    }

    const prompt = `今日の天気は ${data.weather} で、予定は ${data.schedule} です。この条件に合わせた行動のアドバイスを簡潔に教えて下さい`;

    try {
      const response = await fetch("https://api.openai.com/v1/chat/completions", {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
          "Authorization": `Bearer ${apiKey}`
        },
        body: JSON.stringify({
          model: "gpt-3.5-turbo", // または "gpt-4o" など
          messages: [
            { role: "system", content: "あなたは親切な日本語のアシスタントです。" },
            { role: "user", content: prompt }
          ],
          max_tokens: 200
        })
      });

      const data = await response.json();
      const result = data.choices?.[0]?.message?.content || "アドバイスを生成できませんでした";
      setAdvice(result);

    } catch (error) {
      console.error("Error generating advice:", error);
      setAdvice("アドバイスの生成中にエラーが発生しました");
    }
  };


  return (
    <div>
      <h1>今日の天気と予定</h1>
      <div>
        <label htmlFor="weather">天気: </label>
        <input type="text" id="weather" name="weather" value={data.weather} onChange={handleChange} />
      </div>
      <div>
        <label htmlFor="schedule">予定: </label>
        <input type="text" id="schedule" name="schedule" value={data.schedule} onChange={handleChange} />
      </div>
      <button onClick={generateAdvice}>
        アドバイスを生成
      </button>
      <h2>アドバイス:</h2>
      <p>{advice}</p>
    </div>
  );
}

export default App;
