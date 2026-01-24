#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm0310_GatlingPoint.generated.h"

class AHbkCharacter;

UCLASS(Blueprintable)
class AHbkEm0310_GatlingPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCharacter> OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowNoteCount;
    
public:
    AHbkEm0310_GatlingPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOwningChara(AHbkCharacter* OwningChara);
    
};

