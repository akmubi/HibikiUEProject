#pragma once
#include "CoreMinimal.h"
#include "HbkProjectile.h"
#include "HbkHomingProjectile.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkHomingProjectile : public AHbkProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMoveSpeed;
    
public:
    AHbkHomingProjectile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeHomingMove(int32 NoteCount);
    
};

