#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "HbkLevelSequenceActor.generated.h"

class AHbkEnemyCharacter;
class UAkAudioEvent;
class UCameraComponent;
class UHbkCutSceneFooterButtonWidget;
class UHbkGameAgentComponent;
class UHbkPlayLvSeqOption;

UCLASS(Blueprintable)
class HIBIKI_API AHbkLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSkipToEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayLvSeqOption* PlayOptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkCutSceneFooterButtonWidget* FooterButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<AHbkEnemyCharacter*> SpawnEnemyFromGroup(const FName SpawnGroupName);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAI(const TArray<AHbkEnemyCharacter*>& EnemyList);
    
    UFUNCTION(BlueprintCallable)
    static int32 PostEventUnrealGlobalForLevelSequence(UAkAudioEvent* AkEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginCameraCut(UCameraComponent* InCameraComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInitialized();
    
};

