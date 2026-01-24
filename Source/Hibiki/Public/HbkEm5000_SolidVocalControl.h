#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EHbkNote.h"
#include "EHbkSolidVocalAssaultType.h"
#include "EHbkSolidVocalLyricsType.h"
#include "HbkEm5000SolidVocalParam.h"
#include "HbkEm5000SolidVocalTaskEndDelegate.h"
#include "HbkSolidVoiceControlPoint.h"
#include "Templates/SubclassOf.h"
#include "HbkEm5000_SolidVocalControl.generated.h"

class AHbkEm5000_Mimosa;
class AHbkProjectile_SolidVocal;
class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSignalComponent;
class UHbkSolidVocalControlTask;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm5000_SolidVocalControl : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SolidVocalTaskEnd OnSolidVocalTaskEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm5000_Mimosa> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSolidVoiceControlPoint> ControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorrectionDivisionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkSolidVocalAssaultType AssaultType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartUpEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToReachStartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCountToReachStartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartUpElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotatingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat BeginRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat EndRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat NowRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToReachRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToReachRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPursuingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginPursueSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPursueSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NowPursueSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursueElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToReachPursue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToReachPursue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursueAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote NoteToReachAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoteCountToReachAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssaultElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFinishedTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkSolidVocalControlTask* ControlTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkSolidVocalAssaultType, TSubclassOf<UHbkSolidVocalControlTask>> TaskList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestControlPointNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestControlPointDistance;
    
public:
    AHbkEm5000_SolidVocalControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestSetupControlPoint();
    
    UFUNCTION(BlueprintCallable)
    void TestRotating();
    
    UFUNCTION(BlueprintCallable)
    void TestPursuing();
    
    UFUNCTION(BlueprintCallable)
    void TestAssault();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupControlPoint(int32 Num, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetStartUpNoteType(EHbkNote Type);
    
    UFUNCTION(BlueprintCallable)
    void SetStartUpNoteCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetStartUpEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetSolidVocalSurroundDistance(float InSurroundDistance);
    
    UFUNCTION(BlueprintCallable)
    bool SetSolidVocalParam(int32 Index, const FHbkEm5000SolidVocalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetSolidVocalHealth(float InHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetSolidVocalExplode(bool InIsExplode);
    
    UFUNCTION(BlueprintCallable)
    void SetRotatingEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetPursuingEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerBoss(AHbkEm5000_Mimosa* InOwnerBoss);
    
    UFUNCTION(BlueprintCallable)
    void SetEndRotateSpeed(FQuat Quat);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPursueSpeed(float fSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetAssaultType(EHbkSolidVocalAssaultType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAssaultEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool RegistSolidVocalProjectile(AHbkProjectile_SolidVocal* Projectile);
    
    UFUNCTION(BlueprintCallable)
    bool IsAllIgnited();
    
    UFUNCTION(BlueprintCallable)
    UHbkRhythmSynchroSignalComponent* GetRhythmSynchroSignal();
    
    UFUNCTION(BlueprintCallable)
    UHbkRhythmSynchroComponent* GetRhythmSynchro();
    
    UFUNCTION(BlueprintCallable)
    int32 GetControlPointNum();
    
    UFUNCTION(BlueprintCallable)
    void ControlPointLyricsTypeRandom(const TArray<EHbkSolidVocalLyricsType>& CandidateList);
    
    UFUNCTION(BlueprintCallable)
    void ControlPointLyricsTypePattern(const TArray<EHbkSolidVocalLyricsType>& PatternList);
    
    UFUNCTION(BlueprintCallable)
    void CallOnYourMark();
    
    UFUNCTION(BlueprintCallable)
    bool CallIgnition(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void CallAppearance();
    
    UFUNCTION(BlueprintCallable)
    void AbortSolidVocalControl();
    
};

