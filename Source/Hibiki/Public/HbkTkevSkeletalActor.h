#pragma once
#include "CoreMinimal.h"
#include "HbkCineSkeletalActor.h"
#include "HbkTkevSkeletalActor.generated.h"

class UHbkTKEVToonShadingComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkTkevSkeletalActor : public AHbkCineSkeletalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTKEVToonShadingComponent* TKEVToonShadingComponent;
    
public:
    AHbkTkevSkeletalActor(const FObjectInitializer& ObjectInitializer);

};

