const express = require('express');
const saldo = require('../models/saldo_model');
const router = express.Router();

router.get('/:id?',
 function(request, response) {
  if (request.params.id) {
    saldo.getById(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    saldo.getAll(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});

module.exports = router;