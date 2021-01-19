#pragma once

#include "expr/Expression.h"

namespace petri {
namespace expr {

class Constant : public Expression {
	int value;
public :
	Constant(int value) :value(value) {
	}

	int eval(const SparseIntArray & state) {
		return value ;
	}

	void print(std::ostream & os) const {
		os << value;
	}
	size_t nbChildren() const {
		return 0;
	}
	Expression * childAt(size_t index) {
		throw "No Children.";
	}
	Op getOp() const {
		return CONST;
	}
	/*
	@Override
	public <T> T accept(ExprVisitor<T> v) {
		return v.visit(this);
	}
	
	@Override
	public String toString() {
		return Integer.toString(value);
	}

	@Override
	public int evalDistance(SparseIntArray state, boolean isNeg) {
		throw new UnsupportedOperationException();
	}

	@Override
	public Op getOp() {
		return Op.CONST;
	}
	
	@Override
	public int getValue() {
		return value;
	}

	@Override
	public int hashCode() {
		return 3923+ value;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Constant other = (Constant) obj;
		if (value != other.value)
			return false;
		return true;
	}
   */
};

}}
