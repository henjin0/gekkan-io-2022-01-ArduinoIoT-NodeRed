# gekkan-io-2022-01-ArduinoIoT-NodeRed
月間I/O 2022年 1月号の記事「Arduino Cloud IoTとNode-RED(enebular)を連携させる」の付録です。

# 用意するもの(物品)
販売リンクはSwitchscienceですが、秋月電子通商などでも購入可能です。
また、LEDはArduino MKR WIFI 1010のものを使用します。
- Arduino MKR WiFi 1010(Shttps://www.switch-science.com/catalog/7384/)
- 超音波距離センサ HC-SR04(https://www.switch-science.com/catalog/6080/)
- 4本以上のオス-メスジャンパワイヤ(https://www.switch-science.com/catalog/2294/)
- ブレッドボード(https://www.switch-science.com/catalog/313/)

# 用意するもの(アカウント)
- Arduino IoT Cloud Entryプラン
今回は有料のEntryプランを使用します。すでに課金プラン(Entry, Maker, Maker Plus)を使っている方は本手順をスキップしてください。
ダウングレードの必要はございません。

先にこちらでArduinoアカウントを作成してください。

Arduinoアカウントの作成自体は無料で行えます。
https://docs.arduino.cc/

アカウント作成後、先程のarduino.ccのページのメニューバーにあるCloud→IoT Cloudを選択してください。
選択するとIoT Cloudのページに飛びますので、UPGRADE PLANを選択してください。

最初はFreeプランが選択されていると思います。ここではEntryプランを使用するため、EntryプランのPURCHASEをクリックします。
ちなみに、プラン名上部にあるMONTHLY/YEARLYのトグルボタンをクリックすると月払い/年払いを指定できます。年払いにすると月払いに
比べて幾分安くなるようです。


その後、ページの手順に沿ってクレジットカードでお支払いを済ませていただければと思います。もし一通り遊んだあとにEntryプランをやめたい場合には、
FreeプランにCHANGE PLANすることで再度無料プランにダウングレードできるかと思います。


- enebular
こちらを参考に作成してください。:https://blog.enebular.com/enebular/start-enebular-video1/)


# インストールするもの
- Arduino Create Plugin
インストールするには、下記リンクの手順にしたがってください。
https://create.arduino.cc/getting-started/plugin/install


# 今回の配線

