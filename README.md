# Base-S-Encoding
Encoding with Base sequence!
实现你把数据编入DNA的梦想！
# 编码规则
 DNA 正链(Default)：<br></br>
  A->0b00<br></br>
  C->0b01<br></br>
  G->0b10<br></br>
  T->0b11<br></br>
  ![image](https://user-images.githubusercontent.com/51643958/135789501-df385f81-f9df-4545-9acc-17165cd091d8.png)<br></br>
 DNA 反链(Defined REVERSE_STRAND):<br></br>
  T->0b00<br></br>
  G->0b01<br></br>
  C->0b10<br></br>
  A->0b11(也就是DNA正链的DNA互补链)<br></br>
  ![image](https://user-images.githubusercontent.com/51643958/135789576-9d37728d-a9a5-4be3-a6da-4d9c439d2480.png)<br></br>
 RNA 正链(Defined RNA_STRAND)：<br></br>
  U->0b00<br></br>
  G->0b01<br></br>
  C->0b10<br></br>
  A->0b11(也就是DNA正链的RNA互补链)<br></br>
  ![image](https://user-images.githubusercontent.com/51643958/135789668-491e949f-d928-41e1-bb96-c32ed540fbc6.png)<br></br>
 RNA 反链(Defined RNA_STRAND, REVERSE_STRAND)：<br></br>
  A->0b00<br></br>
  C->0b01<br></br>
  G->0b10<br></br>
  U->0b11(也就是RNA正链的RNA互补链)<br></br>
  ![image](https://user-images.githubusercontent.com/51643958/135789721-24a16377-cb2a-43bf-a6c9-39324b3ae0b5.png)<br></br>
# 编码原理
 见Base-S-encode.cpp
# Fancy Output
  定义FANCY_STYLE宏<br></br>
  ![image](https://user-images.githubusercontent.com/51643958/135789330-06675b2e-fb9e-4ebb-b7f2-38b71829ae9c.png)
