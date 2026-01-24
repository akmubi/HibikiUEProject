#pragma once
#include "CoreMinimal.h"
#include "ActorActivateInterface.h"
#include "EHbkAm1100_AnimationType.h"
#include "HbkNpcCharacter.h"
#include "HbkAm1100_Mouse.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkAm1100_Mouse : public AHbkNpcCharacter, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAm1100_AnimationType AnimType;
    
public:
    AHbkAm1100_Mouse(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

