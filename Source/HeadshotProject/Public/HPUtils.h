#pragma once

class HPUtils
{
public:
	template<typename T>
	static T* GetHPPlayerComponent(APawn* PlayerPawn) 
	{
		if (!PlayerPawn) return nullptr;

		const auto Componet = PlayerPawn->GetComponentByClass(T::StaticClass());
		return Cast<T>(Componet);
	}
};