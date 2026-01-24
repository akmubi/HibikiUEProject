#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkGraphicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGraphicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseCharacterDynamicShadows3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CharacterShadowOffset;
    
public:
    UHbkGraphicsComponent(const FObjectInitializer& ObjectInitializer);

};

