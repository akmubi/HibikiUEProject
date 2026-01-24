#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "InteractDelegate.h"
#include "HbkGimmick_SpectraBattleRoomExitDoorMaterial.h"
#include "HbkGimmick_SpectraBattleRoomExitDoor.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AHbkGimmick_SpectraBattleRoomExitDoor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractDelegate OnInteract;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideMaterialMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* OverrideMaterialMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideMaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SpectraBattleRoomExitDoorMaterial> OverrideMaterials;
    
public:
    AHbkGimmick_SpectraBattleRoomExitDoor(const FObjectInitializer& ObjectInitializer);

};

