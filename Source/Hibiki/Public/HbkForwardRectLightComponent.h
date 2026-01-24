#pragma once
#include "CoreMinimal.h"
#include "HbkForwardLightComponent.h"
#include "HbkForwardRectLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkForwardRectLightComponent : public UHbkForwardLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleDirectionShading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceHeight;
    
    UHbkForwardRectLightComponent(const FObjectInitializer& ObjectInitializer);

};

