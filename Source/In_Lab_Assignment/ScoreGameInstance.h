// The header file for my Singleton. Also, why does Unreal always want a copyright thingy here? Gives me an error when I delete it.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ScoreGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class IN_LAB_ASSIGNMENT_API UScoreGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// this here adds points to a player score
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Points);

	// gets the scroe, so updates it pretty much
	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetScore() const;

	// resets score, in case of new level but currently not used 
	UFUNCTION(BlueprintCallable, Category = "Score")
	void ResetScore();

private:
	// Starting score is set at 0 (duh)
	int32 TotalScore = 0;
	
};
