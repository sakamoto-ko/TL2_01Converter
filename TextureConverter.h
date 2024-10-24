#pragma once
#include <string>

class TextureConverter
{
public:
	//テクスチャをWICからDDSに変換する
	void ConvertTextureWiCToDDs(const std::string& filePath);

private:
	//テクスチャファイル読み込み
	void LoadWICTextureFromFile(const std::string& filePath);
	//マルチバイト文字列をワイド文字列に変換
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};

