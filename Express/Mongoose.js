const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');

const app = express();

const Message = mongoose.model('message', mongoose.Schema({
    username:{
        type: String,
        required: true
    },
    message: {
        type: String,
        required: true
    }
}));

async function MongoSave({uername, message}){
    const newMessage = new Message({username, message});
}