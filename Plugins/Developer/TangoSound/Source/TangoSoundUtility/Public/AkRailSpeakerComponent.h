#pragma once
#include "CoreMinimal.h"
#include "AkChangeRoomType.h"
#include "Components/SplineComponent.h"
#include "AkRailCurveType.h"
#include "AkRailSpeakerComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UAkRailSpeakerComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkChangeRoomType ChangeRoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkRailCurveType curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak;
    
public:
    UAkRailSpeakerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Stop(int32 FadeTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Resume();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Pause();
    
};

