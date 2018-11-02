# Send a Transaction

sendtoaddress:

```
./src/bsha3d -fallbackfee=0.0001
ADDR=$(./src/bsha-cli getnewaddress)
TXID=$(./src/bsha3-cli sendtoaddress $ADDR 49.999)
```

createrawtransaction:

```
./src/bsha3d
RAWTX=./src/bsha3-cli createrawtransaction ...
SIGNEDRAWTX=./src/bsha3-cli signrawtransactionwithwallet
BROADCASTEDTXID=./src/bsha3-cli sendrawtransactionwithwallet
```
