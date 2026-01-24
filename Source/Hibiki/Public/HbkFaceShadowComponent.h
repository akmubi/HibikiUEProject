#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkFaceShadowComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkFaceShadowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecifySlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotNames;
    
    UHbkFaceShadowComponent(const FObjectInitializer& ObjectInitializer);

};

