#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkStaticShadowMapActor.generated.h"

class UHbkStaticShadowMapCaptureComponent2D;
class UHbkStaticShadowMapGameComponent;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API AHbkStaticShadowMapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticShadowMapCaptureComponent2D* HbkStaticShadowMapCaptureComponent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticShadowMapGameComponent* HbkStaticShadowMapGameComponent;
    
    AHbkStaticShadowMapActor(const FObjectInitializer& ObjectInitializer);

};

