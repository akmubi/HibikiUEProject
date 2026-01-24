#pragma once
#include "CoreMinimal.h"
#include "AttackInterface.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_VolcaneBombAction.h"
#include "HbkGimmick_VolcaneBombMaterial.h"
#include "HbkGimmick_VolcaneBombSound.h"
#include "HbkGimmick_VolcaneBombVfx.h"
#include "HbkGimmick_VolcaneBomb.generated.h"

class UTngSplineComponent;

UCLASS(Blueprintable)
class AHbkGimmick_VolcaneBomb : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngSplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneBombAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneBombMaterial Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneBombVfx Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_VolcaneBombSound Sound;
    
public:
    AHbkGimmick_VolcaneBomb(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

