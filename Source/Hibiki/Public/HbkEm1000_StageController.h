#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkBossStageControllerBase.h"
#include "HbkEm1000_StageController.generated.h"

class AActor;
class AHbkCharacter;
class AHbkCharacterShadowSpotLight;
class UDataTable;
class UHbkSpectrumInfoComponent;

UCLASS(Blueprintable)
class AHbkEm1000_StageController : public AHbkBossStageControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MissileLandPosList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCharacterShadowSpotLight> BehindSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> StageTableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> MoveBasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SpecialAndJamPos;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectrumInfoComponent* SpectrumInfoComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> EnginePostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StagingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBrokenHeadPartsL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBrokenHeadPartsR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float LeftHandHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RightHandHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsIgnoreDisplayActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartLyricsUserCueName;
    
public:
    AHbkEm1000_StageController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUserCueNoLyrics();
    
    UFUNCTION(BlueprintCallable)
    void OnUserCueLyrics(int32 CallCount);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerChangeState(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerChangePhase(int32 PhaseNumber);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerAttackImpact(const AHbkCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrokenHeadR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrokenHeadL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkSpectrumInfoComponent* GetSpectrumInfoComp() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetMoveBasePoint();
    
    UFUNCTION(BlueprintCallable)
    void EndToonMasking();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnQa1milBeginPhase4();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnQa1milBeginPhase3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnQa1milBeginPhase2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnQa1milBeginPhase1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnLyricsStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnLyricsEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginToonMasking();
    
};

