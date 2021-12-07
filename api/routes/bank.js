const express = require('express');
const router = express.Router();
const bank = require('../models/bank_model');

router.post('/debit_tilisiirto', function(request, response){
    bank.debit(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
}
);

router.post('/credit_tilisiirto', function(request, response){
    bank.credit(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
}
);

router.post('/debit_nosto', function(request, response){
    bank.debit_nosto(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
}
);

module.exports = router;