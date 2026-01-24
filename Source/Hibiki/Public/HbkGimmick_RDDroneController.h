#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_RDDroneControllerDroneParam.h"
#include "HbkGimmick_RDDroneControllerPlaceParam.h"
#include "HbkGimmick_RDDroneController.generated.h"

class AHbkGimmick_RDDrone;

UCLASS(Blueprintable)
class AHbkGimmick_RDDroneController : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RDDroneControllerDroneParam DroneParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RDDroneControllerPlaceParam> PlaceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmick_RDDrone*> DroneActors;
    
public:
    AHbkGimmick_RDDroneController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttackEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackEnable() const;
    
};

