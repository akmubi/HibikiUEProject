#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerCharacterBase.h"
#include "HbkCh3000_CNMN.generated.h"

class UHbkCostumeMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkCh3000_CNMN : public AHbkPlayerCharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
public:
    AHbkCh3000_CNMN(const FObjectInitializer& ObjectInitializer);

};

