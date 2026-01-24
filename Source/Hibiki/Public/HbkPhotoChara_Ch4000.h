#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoCharaActor.h"
#include "HbkPhotoChara_Ch4000.generated.h"

class UHbkCostumeMeshComponent;
class UHbkFaceShadowComponent;

UCLASS(Blueprintable)
class AHbkPhotoChara_Ch4000 : public AHbkPhotoCharaActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFaceShadowComponent* HbkFaceShadow;
    
public:
    AHbkPhotoChara_Ch4000(const FObjectInitializer& ObjectInitializer);

};

