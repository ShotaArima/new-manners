defmodule Calculator do
    def main do
        price = 150
        IO.write "How many do you need?:" # 改行しない出力
        amount = IO.gets("") |> String.trim |> String.to_integer
        total = price * amount
        IO.puts "Total : #{total} yen"
    end
end

Calculator.main
