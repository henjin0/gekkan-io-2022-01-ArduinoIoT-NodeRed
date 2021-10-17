# gekkan-io-2022-01-ArduinoIoT-NodeRed
月間I/O 2022年 1月号の記事「Arduino Cloud IoTとNode-RED(enebular)を連携させる」の付録です。

# 用意するもの(物品)
販売リンクは秋月電子通商ですが、Switchscienceなどでも購入可能です。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/LED.jpg" width="300">


- Arduino MKR WiFi 1010(https://akizukidenshi.com/catalog/g/gM-16556/)
- 超音波距離センサ HC-SR04(https://akizukidenshi.com/catalog/g/gM-11009/)
- 抵抗内蔵LED(https://akizukidenshi.com/catalog/g/gI-16687/)
- 4本以上のオス-メスジャンパワイヤ(https://akizukidenshi.com/catalog/g/gC-08934/)
- ブレッドボード(https://akizukidenshi.com/catalog/g/gP-04303/)

# 用意するもの(アカウント)
- Arduino IoT Cloudアカウントと Entryプラン

今回は有料のEntryプランを使用します。**すでに課金プラン(Entry, Maker, Maker Plus)を使っている方は本手順をスキップしてください。
ダウングレードの必要はございません。**

先にこちらでArduinoアカウントを作成してください。
Arduinoアカウントの作成自体は無料で行えます。
https://docs.arduino.cc/

アカウント作成後、先程のarduino.ccのページのメニューバーにあるCloud→IoT Cloudを選択してください。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/CloudIoT.png" width="600">

ページ遷移後、ARDUINO IOT CLOUDをクリックしてください。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/ArduinoCloudIoT_In.png" width="600">

クリックするとIoT Cloudのページに飛びますので、UPGRADE PLANを選択し、Plan変更ページに移動します。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/UPGRADE_PLAN.png" width="600">

**ここから料金が発生します。**　ページ遷移直後はFreeプランが選択されていると思います。ここではEntryプランを使用するため、EntryプランのPURCHASEをクリックします。
ちなみに、プラン名上部にあるMONTHLY/YEARLYのトグルボタンをクリックすると月払い/年払いを指定できます。年払いにすると月払いに
比べて幾分安くなるようです。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/Plans.png" width="600">

その後、ページの手順に沿ってクレジットカードで手続きをすすめると、PlanがEntryに変更されます。
もし一通り遊んだあとにEntryプランをやめたい場合には、FreeプランにCHANGE PLANすることで再度無料プランにダウングレードできるかと思います。
現在の自分のプランを確認する際には、再度UPGRADE PLANをクリックしてPlan変更ページに行くと確認できます。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/Currentplan.png" width="600">


- enebularアカウント

公式の手順がありますのでこちらを参考に作成してください。

https://blog.enebular.com/enebular/start-enebular-video1/


# インストールするもの
- Arduino Create Plugin

インストーラのダウンロードとインストール手順は下記リンクを参考に行ってください。
また、過去にインストールしたことがある場合はスキップされます。

https://create.arduino.cc/getting-started/plugin/install


# 今回の配線

超音波センサHC-SR04とのジャンパ結線は下記の表を参考にしてください。

| Arduino　MKR WIFI 1010 | HC-SR04 |
----|---- 
| 5V | Vcc |
| GND | Gnd |
| GPIO7 | Trig |
| GPIO6 | Echo |


参考までに、ジャンパ結線した実例を掲載します。

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/Real_circuit.jpg" width="600">

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/Real_circuit_side.jpg" width="600">

<img src="https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/image/Real_circuit_HC-SR04.jpg" width="600">

# License
Please see [LICENSE](https://github.com/henjin0/gekkan-io-2022-01-ArduinoIoT-NodeRed/blob/main/LICENSE).
