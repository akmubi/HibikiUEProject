#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_DroneCargo.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_DroneCargo : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> CargoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* pCargo;
    
public:
    AHbkGimmick_DroneCargo(const FObjectInitializer& ObjectInitializer);

};

