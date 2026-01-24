#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "HbkSearchableItemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSearchableItemComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchEnable;
    
public:
    UHbkSearchableItemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSearchable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchable() const;
    
};

