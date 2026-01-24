#pragma once
#include "CoreMinimal.h"
#include "Components/SkinnedMeshComponent.h"
#include "HbkSmearMotionBlurSetting.h"
#include "HbkSmearSkeletalMeshComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSmearSkeletalMeshComponent : public USkinnedMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSmearMotionBlurSetting> Settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
public:
    UHbkSmearSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

