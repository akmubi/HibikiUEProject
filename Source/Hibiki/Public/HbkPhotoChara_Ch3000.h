#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoCharaActor.h"
#include "HbkPhotoChara_Ch3000.generated.h"

class UHbkCostumeMeshComponent;

UCLASS(Blueprintable)
class AHbkPhotoChara_Ch3000 : public AHbkPhotoCharaActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
public:
    AHbkPhotoChara_Ch3000(const FObjectInitializer& ObjectInitializer);

};

