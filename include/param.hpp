#ifndef PARAM_HPP_
#define PARAM_HPP_


class Key_EC(){

}

SecByteBlock key(AES::DEFAULT_KEYLENGTH), iv(AES::BLOCKSIZE);
string k,v;

OS_GenerateRandomBlock(true, key, key.size());
OS_GenerateRandomBlock(false, iv, iv.size());

struct EC_CURVE_PARAM {

    int g_nNumber;
} TNum;

#endif //PARAM_HPP_
