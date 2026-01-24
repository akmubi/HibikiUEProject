#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkScaleAnimType_t.h"
#include "EHbkScaleKindType_t.h"
#include "HbkScaleAnimBoneInfo_t.h"
#include "HbkScaleAnimParticleInfo_t.h"
#include "HbkScaleAnimComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkScaleAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkScaleKindType_t> scaleKindType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkScaleAnimType_t> scaleAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float defaultScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeMaxScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scaleMultiplyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool actorScalingX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool actorScalingY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool actorScalingZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkScaleAnimBoneInfo_t> boneInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkScaleAnimParticleInfo_t particleInfo;
    
    UHbkScaleAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetScaleValue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Button_Event(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void BeatEvent_Timing(const int32 BeatCount);
    
    UFUNCTION(BlueprintCallable)
    void BeatEvent_Rhythm(const int32 BeatCount);
    
};

