#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHbkEm5000SpotlightTrackMode.h"
#include "EHbkNote.h"
#include "HbkEm5000SpotlightColor.h"
#include "HbkEm5000SpotlightParameter.h"
#include "HbkEm5000_Spotlight.generated.h"

class AHbkCharacter;
class UAkAudioEvent;
class UAkComponent;
class UHbkRhythmSynchroComponent;
class UHbkSoloAnalyticFogSpotLightComponent;
class UHbkSoloSpotLightComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm5000_Spotlight : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SpotlightParameter Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000SpotlightTrackMode TrackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NowSquareCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquareSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCharacter> TrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDestroyDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SpotlightColor TargetColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SpotlightColor BeginColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpdateChangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpotlightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogSpotlightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloSpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloAnalyticFogSpotLightComponent* FogSpotlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestSquareCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote TestActiveNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestActiveNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000SpotlightTrackMode TestTrackModeType;
    
public:
    AHbkEm5000_Spotlight(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestTrackMode();
    
    UFUNCTION(BlueprintCallable)
    void TestTrackingTargetPlayer();
    
    UFUNCTION(BlueprintCallable)
    void TestRestTrackingTarget();
    
    UFUNCTION(BlueprintCallable)
    void TestChangeConeAngle();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrackMode(EHbkEm5000SpotlightTrackMode InTrackMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackingTarget(AHbkCharacter* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackingSocketName(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroy(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrackingTarget();
    
    UFUNCTION(BlueprintCallable)
    bool IsWithinRange(const FVector& Location, float SquareCount);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLightColor(EHbkNote NoteType, float NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void ChangeConeAngle(float SquareCount, EHbkNote NoteType, float NoteCount, bool IsPlaySe);
    
};

