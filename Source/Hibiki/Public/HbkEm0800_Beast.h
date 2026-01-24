#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkEm0800_Beast.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0800_Beast : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AtkMissedDamage;
    
public:
    AHbkEm0800_Beast(const FObjectInitializer& ObjectInitializer);

};

