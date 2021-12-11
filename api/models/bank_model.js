const db = require('../database');
//luodaan bank-niminen objekti
//ja sen sisään tarvittavat funktiot
const bank = {

    debit: function(postData, callback){
        return db.query('call debit_tilisiirto(?,?,?)',
        [postData.id1, postData.id2, postData.summa],
        callback);
    },
    credit: function(postData, callback){
        return db.query('call credit_tilisiirto(?,?,?)',
        [postData.id1, postData.id2, postData.summa],
        callback);
    },
    debit_nosto: function(postData, callback){ //Nosta rahaa -toiminto
        return db.query('call debit_nosto(?,?)',
        [postData.id, postData.summa],
        callback);
    }
};
//exportilla viedään ulos bank objekti
module.exports = bank;