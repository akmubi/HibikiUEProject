#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkGimmickAnimRateMesh.h"
#include "HbkGimmickAnimRateParam.h"
#include "HbkGimmickAnimRateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickAnimRateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimRateMesh> Meshes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickAnimRateParam Param;
    
    UHbkGimmickAnimRateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnShowDebugImGui();
    
};

