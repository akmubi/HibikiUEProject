#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkCineDynamicShadowsComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkCineDynamicShadowsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> Characters;
    
    UHbkCineDynamicShadowsComponent(const FObjectInitializer& ObjectInitializer);

};

