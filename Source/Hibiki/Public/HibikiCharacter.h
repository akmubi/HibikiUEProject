#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HibikiCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class AHibikiCharacter : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    AHibikiCharacter(const FObjectInitializer& ObjectInitializer);

};

