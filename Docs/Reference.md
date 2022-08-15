<style>
    /* Note */
    .note {
        color: DeepSkyBlue;
        font-weight: bold;
    }
    .note:before, .note:after {
        content: " (i) ";
    }

    /* Warning */
    .warning {
        color: red;
        font-weight: bold;
    }
    .warning:before, .warning:after {
        content: " !!! ";
    }

</style>





# C++

## Naming conventions

### Variables

* Noun
* `PascalCase`
* `b` prefix for `bool` variables



### Methods

* Verbs or questions
* `PascalCase`



### Types

* Noun
* `PascalCase`
* Has one of the following prefixes:
    | Type               | Prefix |
    | ------------------ | ------ |
    | Has `template`     | `T`    |
    | Child of `UObject` | `U`    |
    | Child of `AActor`  | `A`    |
    | Child of `SWidget` | `S`    |
    | Abstract interface | `I`    |
    | `enum`             | `E`    |
    | `struct`           | `F`    |




## Properties

I didn't really found a one thing fits all syntax for declaring properties, but this method makes the most sense to me.

* Remove `SetProperty` to make constant
    * <span class="warning">Still editable by the class itself</span>
* Remove `meta=(ExposeOnSpawn)` to set default values in the constructor without exposing to blueprints

```cpp
public:
    UFUNCTION(BlueprintGetter)
    int GetProperty() const;

    UFUNCTION(BlueprintSetter)
    void SetProperty(int NewProperty);


private:
    /**
     * Describe property
     */
    UPROPERTY(
        Category="Some|Category",
        EditAnywhere, // Exposes parameters in the details panel
        BlueprintGetter=GetProperty, BlueprintSetter=SetProperty,
        meta=(ExposeOnSpawn)
    )
    int Property;
```




## Comments

### Variables

```cpp
/**
 * Comment
 */
```



### Methods

```cpp
/**
 * Comment
 * @param NAME Comment
 * @return Comment
 */
```





# Other

* Visit [this page](https://github.com/CleanCut/UE4StyleGuide) for more conventions
