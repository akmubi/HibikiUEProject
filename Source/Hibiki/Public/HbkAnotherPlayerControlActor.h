#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EHbkPlayerControlMode.h"
#include "Templates/SubclassOf.h"
#include "HbkAnotherPlayerControlActor.generated.h"

class AHbkPlayerCharacterBase;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAnotherPlayerControlActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkPlayerCharacterBase> AnotherPlayerCharaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerControlMode AnotherPlayerControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LockonTargetRoleTag;
    
public:
    AHbkAnotherPlayerControlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RevertControlToPlayerCharacter(bool bTeleportMainPlayer);
    
    UFUNCTION(BlueprintCallable)
    void GenerateAnotherPlayerCharacter(bool bIsImmediateControl);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAnotherPlayerCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ChangeControlToAnotherPlayerCharacter(FTransform NewLocation);
    
};

