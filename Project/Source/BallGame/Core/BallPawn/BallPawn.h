// Copyleft neGames. Licenced under GPL-3.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallPawn.generated.h"




UCLASS()
class BALLGAME_API ABallPawn : public APawn
{
	GENERATED_BODY()

	public:
		ABallPawn();

	protected:
		virtual void BeginPlay() override;

	public:
		virtual void Tick(float DeltaTime) override;

		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
