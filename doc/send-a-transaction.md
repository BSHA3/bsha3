# Send a Transaction

## `sendtoaddress`:

```
./src/bsha3d -fallbackfee=0.0001
ADDR=$(./src/bsha-cli getnewaddress)
TXID=$(./src/bsha3-cli sendtoaddress $ADDR 49.999)
```

## `createrawtransaction`:

Use input(s), by txid and vout, to create spendable outputs at destination addr(s). Leftovers become fees collected by miners; be sure to account for change from your inputs. This example input spents most of a 50 BSHA3 coinbase reward.

```
./src/bsha3d
RAWTX=./src/bsha3-cli createrawtransaction "[{\"txid\":\"txid\",\"vout\":0}]" "{\"axxxxxxxxxxxx\":49.999}" 
SIGNEDRAWTX=./src/bsha3-cli signrawtransactionwithwallet $RAWTX
BROADCASTEDTXID=./src/bsha3-cli sendrawtransactionwithwallet $SIGNEDRAWTX
```
