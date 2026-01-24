#pragma once
#include "CoreMinimal.h"
#include "HbkDamageInterface.h"
#include "HbkPartnerCharacterBase.h"
#include "HbkCh1000_Peppermint.generated.h"

class UHbkPlayerShootingComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkCh1000_Peppermint : public AHbkPartnerCharacterBase, public IHbkDamageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerShootingComponent* HbkPlayerShooting;
    
public:
    AHbkCh1000_Peppermint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

