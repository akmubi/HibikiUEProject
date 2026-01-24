#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_bg1240Type.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1240Action.h"
#include "HbkGimmick_bg1240Material.h"
#include "HbkGimmick_bg1240.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AHbkGimmick_bg1240 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg1240Type Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1240Action Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_bg1240Material Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ProgressCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
public:
    AHbkGimmick_bg1240(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimation();
    
};

