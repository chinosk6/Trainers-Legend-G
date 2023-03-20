#pragma once
#include "stdinclude.hpp"

namespace UmaGUiShowData {

	class UmaRaceMotionData {
	public:
		int gateNo;
		std::string charaName;
		std::string trainerName;
		float speed = 0.0f;
		float rate = 0.0f;
		float RaceBaseSpeed = 0.0f;
		float MinSpeed = 0.0f;
		float StartDashSpeedThreshold = 0.0f;
		bool IsOverRun = false;
		float Hp = 0.0f;
		float MaxHp = 0.0f;
		float HpPer = 0.0f;
		int NearHorseCount = 0;
		float CongestionTime = 0;
		int RawSpeed = 0;
		float BaseSpeed = 0;
		float Speed = 0;
		int RawStamina = 0;
		float BaseStamina = 0;
		float Stamina = 0;
		int RawPow = 0;
		float BasePow = 0;
		float Pow = 0;
		int RawGuts = 0;
		float BaseGuts = 0;
		float Guts = 0;
		int RawWiz = 0;
		float BaseWiz = 0;
		float Wiz = 0;
		int ActivateSkillCount = 0;
		bool IsStartDash = false;
		float lastSpeed = 0;
		float MoveDistance = 0.0f;
		float distance = 0.0f;
		int rank = 0;

		UmaRaceMotionData(int gateNo, std::wstring charaName, std::wstring trainerName);
		void UpdateMotionData(float speed, float rate, float RaceBaseSpeed, float MinSpeed, float StartDashSpeedThreshold,
			bool IsOverRun, float Hp, float MaxHp, float HpPer, int NearHorseCount, float CongestionTime, int RawSpeed,
			float BaseSpeed, float Speed, int RawStamina, float BaseStamina, float Stamina, int RawPow, float BasePow, float Pow,
			int RawGuts, float BaseGuts, float Guts, int RawWiz, float BaseWiz, float Wiz, bool IsStartDash, int ActivateSkillCount,
			float lastSpeed, float MoveDistance, float distance);

		void setRank(int rank);

	};

}