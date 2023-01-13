#pragma once
#include "DebugText.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Sprite.h"
#include "DebugCamera.h"

#include "Enum.h"
#include "GameScene.h"

/// <summary>
/// �^�C�g���V�[��
/// </summary>
class Clear
{
private: // �ÓI�����o�ϐ�
	static const int debugTextTexNumber = 0;

public://�����o�֐�

	/// <summary>
	/// �R���X�g�N���^
	/// </summary>
	Clear();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Clear();

	/// <summary>
	/// ������
	/// </summary>
	void Initialize(DirectXCommon* dxCommon, Input* input);


	/// <summary>
	/// ���t���[������
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

	Scene GetNextScene() { return nextScene_; }

	int GetChangeFlag() { return changeFlag_; }

private:
	DirectXCommon* dxCommon = nullptr;
	Input* input = nullptr;
	DebugText debugText;
	DebugCamera* camera = nullptr;

	//�f�o�b�O�J�����L��
	bool isDebugCameraActive_ = false;

	Scene nextScene_ = Scene::CLREA;

	int changeFlag_ = false;
	//�X�v���C�g
	Sprite* spriteBG = nullptr;
};

