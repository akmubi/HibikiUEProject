#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RockfallAction.h"
#include "HbkGimmick_RockfallMaterial.h"
#include "HbkGimmick_Rockfall.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkGimmick_Rockfall : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RockfallAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RockfallMaterial> Materials;
    
public:
    AHbkGimmick_Rockfall(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

