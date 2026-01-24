#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoCharaActor.h"
#include "Templates/SubclassOf.h"
#include "HbkPhotoChara_Am0000.generated.h"

class AHbkPhotoChara_Am0000;
class UHbkCostumeMeshComponent;

UCLASS(Blueprintable)
class AHbkPhotoChara_Am0000 : public AHbkPhotoCharaActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* HbkCostumeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkPhotoChara_Am0000> CatModeActorClass;
    
public:
    AHbkPhotoChara_Am0000(const FObjectInitializer& ObjectInitializer);

};

