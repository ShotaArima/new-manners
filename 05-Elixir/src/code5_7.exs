defmodule Filter1_1 do
  def main do
  name_list = ["Alice", "Bob", "Caroline", "David", "Eve"]
  filtered_list = Enum.filter(name_list,
    fn s -> String.contains?(s, "a") end)
  IO.inspect(filtered_list)
  end
end

Filter1_1.main
