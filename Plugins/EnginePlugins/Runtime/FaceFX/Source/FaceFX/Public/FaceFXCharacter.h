#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FaceFXCharacter.generated.h"

class UFaceFXActor;
class UFaceFXAnim;

UCLASS(Blueprintable)
class FACEFX_API UFaceFXCharacter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFaceFXActor* FaceFXActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFaceFXAnim* CurrentAnim;
    
public:
    UFaceFXCharacter();

};

