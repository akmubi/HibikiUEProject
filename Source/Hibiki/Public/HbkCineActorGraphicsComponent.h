#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkCineActorGraphicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkCineActorGraphicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsPlayer;
    
    UHbkCineActorGraphicsComponent(const FObjectInitializer& ObjectInitializer);

};

