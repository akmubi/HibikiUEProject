#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkRepilsionWeightClass.h"
#include "HbkRepulsionPreset.h"
#include "HbkRepulsionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRepulsionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRepilsionWeightClass WeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoreDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkRepulsionPreset> RepulsionPresets;
    
    UHbkRepulsionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuspendRepulsionAgent();
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsionParamByPreset(const FName& PresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetRepulsionParam(const FHbkRepulsionPreset& CustomParam);
    
    UFUNCTION(BlueprintCallable)
    void ResumeRepulsionAgent();
    
};

